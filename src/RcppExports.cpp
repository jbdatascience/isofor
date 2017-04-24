// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// nodes_cpp
IntegerVector nodes_cpp(DataFrame x, NumericMatrix Tree, double e, int ni);
RcppExport SEXP isofor_nodes_cpp(SEXP xSEXP, SEXP TreeSEXP, SEXP eSEXP, SEXP niSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Tree(TreeSEXP);
    Rcpp::traits::input_parameter< double >::type e(eSEXP);
    Rcpp::traits::input_parameter< int >::type ni(niSEXP);
    rcpp_result_gen = Rcpp::wrap(nodes_cpp(x, Tree, e, ni));
    return rcpp_result_gen;
END_RCPP
}
// predict_iForest_nodes_cpp
IntegerMatrix predict_iForest_nodes_cpp(DataFrame x, List Model);
RcppExport SEXP isofor_predict_iForest_nodes_cpp(SEXP xSEXP, SEXP ModelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type Model(ModelSEXP);
    rcpp_result_gen = Rcpp::wrap(predict_iForest_nodes_cpp(x, Model));
    return rcpp_result_gen;
END_RCPP
}
// predict_iForest_sparse_nodes
SEXP predict_iForest_sparse_nodes(DataFrame x, List Model);
RcppExport SEXP isofor_predict_iForest_sparse_nodes(SEXP xSEXP, SEXP ModelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type Model(ModelSEXP);
    rcpp_result_gen = Rcpp::wrap(predict_iForest_sparse_nodes(x, Model));
    return rcpp_result_gen;
END_RCPP
}
// predict_iForest_pathlength_cpp
SEXP predict_iForest_pathlength_cpp(SEXP df, List Model, SEXP n_cores);
RcppExport SEXP isofor_predict_iForest_pathlength_cpp(SEXP dfSEXP, SEXP ModelSEXP, SEXP n_coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type df(dfSEXP);
    Rcpp::traits::input_parameter< List >::type Model(ModelSEXP);
    Rcpp::traits::input_parameter< SEXP >::type n_cores(n_coresSEXP);
    rcpp_result_gen = Rcpp::wrap(predict_iForest_pathlength_cpp(df, Model, n_cores));
    return rcpp_result_gen;
END_RCPP
}
