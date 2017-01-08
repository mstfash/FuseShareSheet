#pragma once

namespace uObjC
{

template<class ReturnType, class... Params>
    using Function = ReturnType (^) (Params...);

template<class ReturnType, class... Params>
    using RawFunction = ReturnType (*) (Params...);

}
