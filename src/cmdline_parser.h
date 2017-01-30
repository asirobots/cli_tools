// Copyright 2017 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef CMDLINE_PARSER_H_
#define CMDLINE_PARSER_H_

#include <string>

bool cli_option_exist(char ** begin, char ** end, const std::string & option)
{
  return std::find(begin, end, option) != end;
}

char * cli_get_option(char ** begin, char ** end, const std::string & option)
{
  char ** itr = std::find(begin, end, option);
  if (itr != end && ++itr != end) {
    return *itr;
  }
  return NULL;
}

#endif  // CMDLINE_PARSER_H_
