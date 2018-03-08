// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// generate_sub_coordinates
NumericMatrix generate_sub_coordinates(Eigen::Map<Eigen::MatrixXd> x, int n_subs);
RcppExport SEXP _grimon_generate_sub_coordinates(SEXP xSEXP, SEXP n_subsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n_subs(n_subsSEXP);
    rcpp_result_gen = Rcpp::wrap(generate_sub_coordinates(x, n_subs));
    return rcpp_result_gen;
END_RCPP
}
// construct_segment_matrix
NumericMatrix construct_segment_matrix(NumericMatrix x);
RcppExport SEXP _grimon_construct_segment_matrix(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(construct_segment_matrix(x));
    return rcpp_result_gen;
END_RCPP
}
// norm_matrix
NumericMatrix norm_matrix(Eigen::Map<Eigen::MatrixXd> x, IntegerVector z_idx, NumericVector scale, NumericVector shift);
RcppExport SEXP _grimon_norm_matrix(SEXP xSEXP, SEXP z_idxSEXP, SEXP scaleSEXP, SEXP shiftSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type z_idx(z_idxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type shift(shiftSEXP);
    rcpp_result_gen = Rcpp::wrap(norm_matrix(x, z_idx, scale, shift));
    return rcpp_result_gen;
END_RCPP
}
// optimize_coordinates
NumericMatrix optimize_coordinates(const Eigen::Map<Eigen::MatrixXd> x, IntegerVector z_idx, IntegerMatrix segment_mat, int maxiter, double T, double alpha, bool to_norm, NumericVector norm_scale, NumericVector norm_shift, bool to_rotate, bool to_flip, bool to_shift, bool progress);
RcppExport SEXP _grimon_optimize_coordinates(SEXP xSEXP, SEXP z_idxSEXP, SEXP segment_matSEXP, SEXP maxiterSEXP, SEXP TSEXP, SEXP alphaSEXP, SEXP to_normSEXP, SEXP norm_scaleSEXP, SEXP norm_shiftSEXP, SEXP to_rotateSEXP, SEXP to_flipSEXP, SEXP to_shiftSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type z_idx(z_idxSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type segment_mat(segment_matSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type T(TSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type to_norm(to_normSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type norm_scale(norm_scaleSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type norm_shift(norm_shiftSEXP);
    Rcpp::traits::input_parameter< bool >::type to_rotate(to_rotateSEXP);
    Rcpp::traits::input_parameter< bool >::type to_flip(to_flipSEXP);
    Rcpp::traits::input_parameter< bool >::type to_shift(to_shiftSEXP);
    Rcpp::traits::input_parameter< bool >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(optimize_coordinates(x, z_idx, segment_mat, maxiter, T, alpha, to_norm, norm_scale, norm_shift, to_rotate, to_flip, to_shift, progress));
    return rcpp_result_gen;
END_RCPP
}
// wide_to_long
NumericMatrix wide_to_long(NumericMatrix x, int z_interval);
RcppExport SEXP _grimon_wide_to_long(SEXP xSEXP, SEXP z_intervalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type z_interval(z_intervalSEXP);
    rcpp_result_gen = Rcpp::wrap(wide_to_long(x, z_interval));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_grimon_generate_sub_coordinates", (DL_FUNC) &_grimon_generate_sub_coordinates, 2},
    {"_grimon_construct_segment_matrix", (DL_FUNC) &_grimon_construct_segment_matrix, 1},
    {"_grimon_norm_matrix", (DL_FUNC) &_grimon_norm_matrix, 4},
    {"_grimon_optimize_coordinates", (DL_FUNC) &_grimon_optimize_coordinates, 13},
    {"_grimon_wide_to_long", (DL_FUNC) &_grimon_wide_to_long, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_grimon(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}