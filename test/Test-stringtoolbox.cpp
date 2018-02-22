/*
 * MIT License
 *
 * Copyright (c) 2018  Christian Berger
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "stringtoolbox.hpp"

TEST_CASE("Test ltrim.") {
    std::string test1l{"ABC"};
    std::string test2l{" ABC"};
    std::string test3l{"ABC "};
    std::string test4l{" ABC "};
    std::string test5l;
    std::string test6l{"A BC"};
    std::string test7l{" A BC"};
    std::string test8l{"A BC "};
    std::string test9l{" A BC "};

    REQUIRE(3 == stringtoolbox::ltrim(test1l).size());
    REQUIRE(3 == stringtoolbox::ltrim(test2l).size());
    REQUIRE(4 == stringtoolbox::ltrim(test3l).size());
    REQUIRE(4 == stringtoolbox::ltrim(test4l).size());
    REQUIRE(stringtoolbox::ltrim(test5l).empty());
    REQUIRE(4 == stringtoolbox::ltrim(test6l).size());
    REQUIRE(4 == stringtoolbox::ltrim(test7l).size());
    REQUIRE(5 == stringtoolbox::ltrim(test8l).size());
    REQUIRE(5 == stringtoolbox::ltrim(test9l).size());
}

TEST_CASE("Test rtrim.") {
    std::string test1r{"ABC"};
    std::string test2r{" ABC"};
    std::string test3r{"ABC "};
    std::string test4r{" ABC "};
    std::string test5r;
    std::string test6r{"A BC"};
    std::string test7r{" A BC"};
    std::string test8r{"A BC "};
    std::string test9r{" A BC "};

    REQUIRE(3 == stringtoolbox::rtrim(test1r).size());
    REQUIRE(4 == stringtoolbox::rtrim(test2r).size());
    REQUIRE(3 == stringtoolbox::rtrim(test3r).size());
    REQUIRE(4 == stringtoolbox::rtrim(test4r).size());
    REQUIRE(stringtoolbox::rtrim(test5r).empty());
    REQUIRE(4 == stringtoolbox::rtrim(test6r).size());
    REQUIRE(5 == stringtoolbox::rtrim(test7r).size());
    REQUIRE(4 == stringtoolbox::rtrim(test8r).size());
    REQUIRE(5 == stringtoolbox::rtrim(test9r).size());
}

TEST_CASE("Test trim.") {
    std::string test1t{"ABC"};
    std::string test2t{" ABC"};
    std::string test3t{"ABC "};
    std::string test4t{" ABC "};
    std::string test5t;
    std::string test6t{"A BC"};
    std::string test7t{" A BC"};
    std::string test8t{"A BC "};
    std::string test9t{" A BC "};

    REQUIRE(3 == stringtoolbox::trim(test1t).size());
    REQUIRE(3 == stringtoolbox::trim(test2t).size());
    REQUIRE(3 == stringtoolbox::trim(test3t).size());
    REQUIRE(3 == stringtoolbox::trim(test4t).size());
    REQUIRE(stringtoolbox::trim(test5t).empty());
    REQUIRE(4 == stringtoolbox::trim(test6t).size());
    REQUIRE(4 == stringtoolbox::trim(test7t).size());
    REQUIRE(4 == stringtoolbox::trim(test8t).size());
    REQUIRE(4 == stringtoolbox::trim(test9t).size());
}
