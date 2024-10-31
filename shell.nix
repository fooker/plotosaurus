{ pkgs ? import <nixpkgs> {}, ... }:

let
  vpype = (pkgs.callPackage ./tools/vpype.nix { }).overrideAttrs (old: {
    nativeBuildInputs = old.nativeBuildInputs ++ [
      pkgs.makeWrapper
    ];

    postFixup = ''
      wrapProgram $out/bin/vpype \
        --add-flags "--config ${./vpype.conf}"
    '';
  });
  
  svg2gcode = pkgs.callPackage ./tools/svg2gcode.nix { };
  bcnc = pkgs.callPackage ./tools/bcnc.nix { };

in
pkgs.mkShell {
  packages = [
    vpype
    svg2gcode
    bcnc

    pkgs.inkscape
  ];
}

