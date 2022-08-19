// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// weight_by_split
Rcpp::S4 weight_by_split(const Rcpp::S4& A_, Rcpp::IntegerVector split_by, const size_t n_groups);
RcppExport SEXP _singlet_weight_by_split(SEXP A_SEXP, SEXP split_bySEXP, SEXP n_groupsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type A_(A_SEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type split_by(split_bySEXP);
    Rcpp::traits::input_parameter< const size_t >::type n_groups(n_groupsSEXP);
    rcpp_result_gen = Rcpp::wrap(weight_by_split(A_, split_by, n_groups));
    return rcpp_result_gen;
END_RCPP
}
// c_nmf
Rcpp::List c_nmf(const Rcpp::S4& A_, const Rcpp::S4& At_, const double tol_, const uint16_t maxit, const bool verbose, const double L1_, const uint16_t threads, Rcpp::NumericMatrix w_, Rcpp::NumericMatrix link_h_, Rcpp::NumericMatrix link_w_, const uint32_t seed, const uint32_t inv_density, const bool float_precision);
RcppExport SEXP _singlet_c_nmf(SEXP A_SEXP, SEXP At_SEXP, SEXP tol_SEXP, SEXP maxitSEXP, SEXP verboseSEXP, SEXP L1_SEXP, SEXP threadsSEXP, SEXP w_SEXP, SEXP link_h_SEXP, SEXP link_w_SEXP, SEXP seedSEXP, SEXP inv_densitySEXP, SEXP float_precisionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type A_(A_SEXP);
    Rcpp::traits::input_parameter< const Rcpp::S4& >::type At_(At_SEXP);
    Rcpp::traits::input_parameter< const double >::type tol_(tol_SEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const double >::type L1_(L1_SEXP);
    Rcpp::traits::input_parameter< const uint16_t >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type w_(w_SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type link_h_(link_h_SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type link_w_(link_w_SEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type inv_density(inv_densitySEXP);
    Rcpp::traits::input_parameter< const bool >::type float_precision(float_precisionSEXP);
    rcpp_result_gen = Rcpp::wrap(c_nmf(A_, At_, tol_, maxit, verbose, L1_, threads, w_, link_h_, link_w_, seed, inv_density, float_precision));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_singlet_weight_by_split", (DL_FUNC) &_singlet_weight_by_split, 3},
    {"_singlet_c_nmf", (DL_FUNC) &_singlet_c_nmf, 13},
    {NULL, NULL, 0}
};

RcppExport void R_init_singlet(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
