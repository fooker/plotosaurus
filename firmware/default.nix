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
      rev = "v1.9.4";
      hash = "sha256-L6oz9mqL55uwhWPD9Yfj7n7ccUMb+g9oHtW1IGajARg=";
    };
  
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

