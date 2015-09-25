/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Tencent is pleased to support the open source community by making behaviac available.
//
// Copyright (C) 2015 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the BSD 3-Clause License (the "License"); you may not use this file except in compliance with
// the License. You may obtain a copy of the License at http://opensource.org/licenses/BSD-3-Clause
//
// Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and limitations under the License.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef _BEHAVIAC_BASE_META_ISCONST_H__INCLUDED
#define _BEHAVIAC_BASE_META_ISCONST_H__INCLUDED

#include "behaviac/base/meta/meta.h"

namespace behaviac
{
    namespace Meta
    {
        // Answer is true only if the provided Type is const
        //
        // typedef const int ConstInt
        //
        // IsConst< ConstInt >::Answer == true
        // IsConst< int >::Answer == false
        //

        template< typename T >
        struct IsConst
        {
            enum
            {
                Result = 0
            };
        };

        template< typename T >
        struct IsConst< const T >
        {
            enum { Result = 1 };
        };

        template< typename T >
        struct IsConst< const T& >
        {
            enum { Result = 1 };
        };

        template< typename T >
        struct IsConst< const T* >
        {
            enum { Result = 1 };
        };

    }
}

#endif