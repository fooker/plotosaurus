{ python3Packages
, fetchFromGitHub
, fetchPypi
, ...
}:

let
  pnoise = python3Packages.buildPythonPackage rec {
    pname = "pnoise";
    version = "0.2.0";

    src = fetchPypi {
      inherit pname version;
      hash = "sha256-djgzENYCvMftI1XNM0+OvFuI5x1b/f7jLRuT05gZcs8=";
    };

    pyproject = true;

    pythonImportsCheck = [ "pnoise" ];
  
    nativeBuildInputs = with python3Packages; [
      setuptools
    ];

    dependencies = with python3Packages; [
      numpy
    ];
  };

  vpype-gcode = python3Packages.buildPythonPackage rec {
    pname = "vpype-gcode";
    version = "0.13.0";

    src = fetchFromGitHub {
      owner = "plottertools";
      repo = "vpype-gcode";
      rev = version;
      hash = "sha256-waSHw4DBgozcBwNTgZwGfvmg0UHaENJIGrCqnMu0ruU=";
    };

    pyproject = true;

    nativeBuildInputs = with python3Packages; [
      setuptools

      pythonRelaxDepsHook
    ];

    dependencies = with python3Packages; [
      numpy
      click
    ];

    pythonRemoveDeps = [
      "vpype"
    ];
  };

  vpype-hatched = python3Packages.buildPythonPackage rec {
    pname = "vpype-hatched";
    version = "0.2.0";

    src = fetchFromGitHub {
      owner = "plottertools";
      repo = "hatched";
      rev = version;
      hash = "sha256-k2x4LPkPY2KLAUuTUNvI7ez7w6DuXT3xiB7x/5RD0lA=";
    };

    pyproject = true;

    nativeBuildInputs = with python3Packages; [
      setuptools

      pythonRelaxDepsHook
    ];

    dependencies = with python3Packages; [
      numpy
      click
      scikit-image
      svgwrite
      shapely
      matplotlib
      opencv4
    ];

    pythonRemoveDeps = [
      "vpype"
      "opencv-python-headless"
    ];
  };

  vpype = python3Packages.buildPythonPackage rec {
    pname = "vpype";
    version = "1.14.0";
  
    src = fetchFromGitHub {
      owner = "abey79";
      repo = "vpype";
      rev = version;
      hash = "sha256-jm6aUpi9Ek2To47W/H62jWlZT7zgV5Dduv18yoPrUkA=";
    };

    postPatch = ''
      substituteInPlace \
        pyproject.toml \
        --replace-fail 'pyphen = "^0.14.0"' 'pyphen = ">=0.14,<0.16"'
    '';
  
    pyproject = true;
  
    pythonImportsCheck = [ "vpype" ];
  
    nativeBuildInputs = with python3Packages; [
      poetry-core
    ];
  
    dependencies = with python3Packages; [
      pnoise
      shapely
      asteval
      cachetools
      click
      multiprocess
      numpy
      noise
      pyphen
      scipy
      svgelements
      svgwrite
      tomli
      click
  
      matplotlib
      glcontext
      moderngl
      pillow
      pyside6
    ];
  };

in (python3Packages.toPythonApplication vpype).overridePythonAttrs (old: {
  dependencies = old.dependencies ++ [
    vpype-gcode
    vpype-hatched
  ];
})

