{ python3Packages
, fetchFromGitHub
, ...
}:

python3Packages.buildPythonApplication rec {
  name = "bCNC";

  src = fetchFromGitHub {
    owner = "vlachoudis";
    repo = "bCNC";
    rev = "da296b9334d715a1f8ccd02e0908ba4f15ee1a25";
    hash = "sha256-43xqanRDi+7+1JjdV2swA8rM2y5ODVDLJFFDAYLDbE4=";
  };

  propagatedBuildInputs = with python3Packages; [
    pyserial
    numpy
    svgelements

    pillow
    opencv4
  ];

  doCheck = false;
}


