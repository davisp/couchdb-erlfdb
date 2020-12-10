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

#include <atomic>

#define BEGIN_C extern "C" {
#define END_C }

std::atomic<uint64_t> ERLFDB_FUTURES_CREATED{0};
std::atomic<uint64_t> ERLFDB_FUTURES_DESTROYED{0};
std::atomic<uint64_t> ERLFDB_FUTURES_FIRED{0};
std::atomic<uint64_t> ERLFDB_FUTURES_READ{0};

BEGIN_C


void
erlfdb_future_created()
{
    ERLFDB_FUTURES_CREATED++;
}

void
erlfdb_future_destroyed()
{
    ERLFDB_FUTURES_DESTROYED++;
}

void
erlfdb_future_fired()
{
    ERLFDB_FUTURES_FIRED++;
}

void
erlfdb_future_read()
{
    ERLFDB_FUTURES_READ++;
}

uint64_t
erlfdb_num_futures_created()
{
    return ERLFDB_FUTURES_CREATED;
}

uint64_t
erlfdb_num_futures_destroyed()
{
    return ERLFDB_FUTURES_DESTROYED;
}

uint64_t
erlfdb_num_futures_fired()
{
    return ERLFDB_FUTURES_FIRED;
}

uint64_t
erlfdb_num_futures_read()
{
    return ERLFDB_FUTURES_READ;
}

END_C