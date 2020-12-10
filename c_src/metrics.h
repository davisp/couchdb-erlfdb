// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

#ifndef ERLFDB_METRICS_H
#define ERLFDB_METRICS_H

#include <stdint.h>

void erlfdb_future_created();
void erlfdb_future_destroyed();
void erlfdb_future_fired();
void erlfdb_future_read();

uint64_t erlfdb_num_futures_created();
uint64_t erlfdb_num_futures_destroyed();
uint64_t erlfdb_num_futures_fired();
uint64_t erlfdb_num_futures_read();

#endif // Included metrics.h
