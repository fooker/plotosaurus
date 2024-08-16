{ pkgs ? import <nixpkgs> {}, ... }:

let
  vpype = (pkgs.callPackage ./vpype.nix { }).overrideAttrs (old: {
    nativeBuildInputs = old.nativeBuildInputs ++ [
      pkgs.makeWrapper
    ];

    postFixup = ''
      wrapProgram $out/bin/vpype \
        --add-flags "--config ${./vpype.conf}"
    '';
  });
  
  svg2gcode = pkgs.callPackage ./svg2gcode.nix { };

in
pkgs.mkShell {
  packages = [
    vpype
    svg2gcode

    pkgs.inkscape
  ];
}

