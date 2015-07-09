[![Build status](https://ci.appveyor.com/api/projects/status/nwnr1yqn2t8au58h?svg=true)](https://ci.appveyor.com/project/luisfmcalado/ci-demo)
[![Build Status](https://travis-ci.org/luisfmcalado/ci_demo.svg?branch=master)](https://travis-ci.org/luisfmcalado/ci_demo)

# README #

Testing CI Tools

### Build

**Linux**  
```
cmake -H. -Bbuild
cmake --build build --config Debug
```  

**Windows**
```
cmake -H. -Bbuild -DBOOST_ROOT="C:\boost_1_58_0" -DBOOST_LIBRARYDIR="C:\boost_1_58_0\stage\lib" " -DBoost_USE_STATIC_LIBS="ON"
cmake --build build --config Debug
```

###Testing

```
cd build/test
ctest -C Debug -VV
```  

# Credits #

MIT © [Luis Calado](https://github.com/luisfmcalado/)
