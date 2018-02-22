## stringtoolbox - a simple header-only, single-file string toolbox library for C++

[![Build Status](https://travis-ci.org/chrberger/stringtoolbox.svg?branch=master)](https://travis-ci.org/chrberger/stringtoolbox) [![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)

stringtoolbox is a small and efficient library written in modern C++ library to provide some features for processing `std::strings`.

stringtoolbox is available as single-file, header-only library - just drop [stringtoolbox.hpp](https://raw.githubusercontent.com/chrberger/stringtoolbox/master/stringtoolbox.hpp) into your project, `#include "stringtoolbox.hpp"`, and compile your project with a modern C++ compiler (C++11 or newer).


## Table of Contents
* [Features](#features)
* [Dependencies](#dependencies)
* [Contributing](#contributing)
* [License](#license)


## Features
* Written in highly portable and high quality C++11
* **Available as header-only, single-file distribution - just drop [stringtoolbox.hpp](https://raw.githubusercontent.com/chrberger/stringtoolbox/master/stringtoolbox.hpp) into your project, `#include "stringtoolbox.hpp"`, and compile your project with a modern C++ compiler (C++11 or newer)**
* Remove leading whitespace characters: `std::string& stringtoolbox::ltrim(std::string &str)`
* Remove trailing whitespace characters: `std::string& stringtoolbox::rtrim(std::string &str)`
* Remove leading and trailing whitespace characters: `std::string& stringtoolbox::trim(std::string &str)`


## Dependencies
No dependencies! All you need is a C++11-compliant compiler (we are testing with GCC 4.8.4) as the project ships the following dependencies as part of the source distribution:

* [Unit Test Framework Catch2](https://github.com/catchorg/Catch2/releases/tag/v2.1.1) - [![License: Boost Software License v1.0](https://img.shields.io/badge/License-Boost%20v1-blue.svg)](http://www.boost.org/LICENSE_1_0.txt) - [Source](https://github.com/chrberger/stringtoolbox/blob/master/test/catch.hpp)


## Installation
### Installation as single-file, header-only library
stringtoolbox is provided as header-only, single-file library as well - just drop [stringtoolbox.hpp](https://raw.githubusercontent.com/chrberger/stringtoolbox/master/stringtoolbox.hpp) into your project, `#include "stringtoolbox.hpp"`, and compile your project with a modern C++ compiler (C++11 or newer)


## Contributing
We are happy to receive your PRs to accelerate libcluon's development; before contributing, please take a look at the [Contribution Documents](CONTRIBUTING.md).


## License
* This project is released under the terms of the MIT License - [![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)
