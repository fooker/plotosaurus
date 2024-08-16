{ rustPlatform
, fetchFromGitHub
, ...
}:

rustPlatform.buildRustPackage rec {
  pname = "svg2gcode";
  version = "0.0.14";

  src = fetchFromGitHub {
    owner = "sameer";
    repo = pname;
    rev = "cli-v${version}";
    hash = "sha256-yPKrfMVI8aDejTgG64MqeOizE4993qkU5fvdUwbCbrY=";
  };

  cargoHash = "sha256-5hW7GsjAqiknKAfx9CdA6G+i6540V+kOgQluY2+3rd8=";
}

