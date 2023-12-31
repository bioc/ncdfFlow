// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"
#include <R_ext/Visibility.h>

// hdfFlow.cpp
bool createFile(std::string filename, int nEvent, int nChannel, int nSample, int nDim, int nCompressionRatio, bool is_libver_earliest);
extern "C" SEXP _ncdfFlow_createFile(SEXP filename, SEXP nEvent, SEXP nChannel, SEXP nSample, SEXP nDim, SEXP nCompressionRatio, SEXP is_libver_earliest) {
  BEGIN_CPP11
    return cpp11::as_sexp(createFile(cpp11::as_cpp<cpp11::decay_t<std::string>>(filename), cpp11::as_cpp<cpp11::decay_t<int>>(nEvent), cpp11::as_cpp<cpp11::decay_t<int>>(nChannel), cpp11::as_cpp<cpp11::decay_t<int>>(nSample), cpp11::as_cpp<cpp11::decay_t<int>>(nDim), cpp11::as_cpp<cpp11::decay_t<int>>(nCompressionRatio), cpp11::as_cpp<cpp11::decay_t<bool>>(is_libver_earliest)));
  END_CPP11
}
// hdfFlow.cpp
bool writeSlice(std::string filename, cpp11::doubles_matrix <> data, std::vector<int> chIndx, int sampleIndx, int nRatio);
extern "C" SEXP _ncdfFlow_writeSlice(SEXP filename, SEXP data, SEXP chIndx, SEXP sampleIndx, SEXP nRatio) {
  BEGIN_CPP11
    return cpp11::as_sexp(writeSlice(cpp11::as_cpp<cpp11::decay_t<std::string>>(filename), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles_matrix <>>>(data), cpp11::as_cpp<cpp11::decay_t<std::vector<int>>>(chIndx), cpp11::as_cpp<cpp11::decay_t<int>>(sampleIndx), cpp11::as_cpp<cpp11::decay_t<int>>(nRatio)));
  END_CPP11
}
// hdfFlow.cpp
cpp11::writable::doubles_matrix <> readSlice(std::string file, std::vector<int> chIndx, int sampleIndx);
extern "C" SEXP _ncdfFlow_readSlice(SEXP file, SEXP chIndx, SEXP sampleIndx) {
  BEGIN_CPP11
    return cpp11::as_sexp(readSlice(cpp11::as_cpp<cpp11::decay_t<std::string>>(file), cpp11::as_cpp<cpp11::decay_t<std::vector<int>>>(chIndx), cpp11::as_cpp<cpp11::decay_t<int>>(sampleIndx)));
  END_CPP11
}

extern "C" {
static const R_CallMethodDef CallEntries[] = {
    {"_ncdfFlow_createFile", (DL_FUNC) &_ncdfFlow_createFile, 7},
    {"_ncdfFlow_readSlice",  (DL_FUNC) &_ncdfFlow_readSlice,  3},
    {"_ncdfFlow_writeSlice", (DL_FUNC) &_ncdfFlow_writeSlice, 5},
    {NULL, NULL, 0}
};
}

extern "C" attribute_visible void R_init_ncdfFlow(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
