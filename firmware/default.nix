{ stdenv
, fetchFromGitHub
, pkgsCross
, lib
, writeText
, writeShellScript
, avrdude
, ...
}:

with lib;

let
  firmware = stdenv.mkDerivation {
    name = "plotosaurus-firmware";
    
    src = fetchFromGitHub {
      owner = "Paciente8159";
      repo = "uCNC";
      rev = "v1.10.0";
      hash = "sha256-Qpm+Vw3VGWH/aE0W9VaiG0CuQrhYWx6ZUo1sfUAfHbY=";
    };

#    patches = [ ./stepper-fix.patch ];
  
    nativeBuildInputs = [
      pkgsCross.avr.buildPackages.gcc7
    ];
  
    makeFlags = [
      "-C makefiles/avr"
    ];
  
    dontFixup = true;

    configurePhase = ''
      cp -v '${./config}'/* ./uCNC
    '';
  
    installPhase = ''
      cp -ar ./makefiles/avr/build/uCNC.hex "$out"
    '';
  
    passthru = {
      flash = writeShellScript "plotosaurus-firmware-flash" ''
        if [ "$#" -ne 1 ]; then
          echo "Usage: flash PORT" >&2
          exit 1
        fi

        ${avrdude}/bin/avrdude \
          -p m328p \
          -P "$1" \
          -c arduino \
          -U 'flash:w:${firmware}'
      '';
    };
  };

in firmware

