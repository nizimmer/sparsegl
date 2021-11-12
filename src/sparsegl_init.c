#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <Rmath.h>
#include <R_ext/Rdynload.h>
#include <R_ext/RS.h>



#define FDEF(name){#name, (DL_FUNC) &F77_SUB(name), sizeof(name ## _t)/sizeof(name ## _t[0]), name ##_t}

void F77_NAME(sparse_four)(
    int *bn,
    int *bs,
    int *ix,
    int *iy,
    double *gam,
    int *nobs,
    int *nvars,
    double *x,
    double *y,
    double *pf,
    int *dfmax,
    int *pmax,
    int *nlam,
    double *flmin,
    double *ulam,
    double *eps,
    int *maxit,
    int *nalam,
    double *beta,
    int *activeGroup,
    int *nbeta,
    double *alam,
    int *npass,
    int *jerr,
    double *alsparse,
    double *lb,
    double *ub
);

static R_NativePrimitiveArgType sparse_four_t[] = {
  INTSXP,
  INTSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  REALSXP,
  REALSXP,
  INTSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  REALSXP,
  REALSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  REALSXP,
  REALSXP
};
void F77_NAME(spmat_four)(
    int *bn,
    int *bs,
    int *ix,
    int *iy,
    double *gam,
    int *nobs,
    int *nvars,
    double *x,
    int *xidx,
    int *xcptr,
    int *nnz,
    double *y,
    double *pf,
    int *dfmax,
    int *pmax,
    int *nlam,
    double *flmin,
    double *ulam,
    double *eps,
    int *maxit,
    int *intr,
    int *nalam,
    double *b0,
    double *beta,
    int *activeGroup,
    int *nbeta,
    double *alam,
    int *npass,
    int *jerr,
    double *alsparse,
    double *lb,
    double *ub
);

static R_NativePrimitiveArgType spmat_four_t[] = {
  INTSXP,
  INTSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  INTSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  REALSXP,
  INTSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  REALSXP,
  REALSXP,
  INTSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  REALSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  REALSXP,
  REALSXP
};
void F77_NAME(log_sparse_four)(
    int *bn,
    int *bs,
    int *ix,
    int *iy,
    double *gam,
    int *nobs,
    int *nvars,
    double *x,
    double *y,
    double *pf,
    int *dfmax,
    int *pmax,
    int *nlam,
    double *flmin,
    double *ulam,
    double *eps,
    int *maxit,
    int *intr,
    int *nalam,
    double *b0,
    double *beta,
    int *activeGroup,
    int *nbeta,
    double *alam,
    int *npass,
    int *jerr,
    double *alsparse,
    double *lb,
    double *ub
);

static R_NativePrimitiveArgType log_sparse_four_t[] = {
  INTSXP,
  INTSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  REALSXP,
  REALSXP,
  INTSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  REALSXP,
  REALSXP,
  INTSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  REALSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  REALSXP,
  REALSXP
};
void F77_NAME(log_spmat_four)(
    int *bn,
    int *bs,
    int *ix,
    int *iy,
    double *gam,
    int *nobs,
    int *nvars,
    double *x,
    int *xidx,
    int *xcptr,
    int *nnz,
    double *y,
    double *pf,
    int *dfmax,
    int *pmax,
    int *nlam,
    double *flmin,
    double *ulam,
    double *eps,
    int *maxit,
    int *intr,
    int *nalam,
    double *b0,
    double *beta,
    int *activeGroup,
    int *nbeta,
    double *alam,
    int *npass,
    int *jerr,
    double *alsparse,
    double *lb,
    double *ub
);

static R_NativePrimitiveArgType log_spmat_four_t[] = {
  INTSXP,
  INTSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  INTSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  REALSXP,
  INTSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  REALSXP,
  REALSXP,
  INTSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  REALSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  INTSXP,
  INTSXP,
  REALSXP,
  REALSXP,
  REALSXP
};



static R_FortranMethodDef fMethods[] = {
  FDEF(sparse_four) ,
  FDEF(spmat_four) ,
  FDEF(log_sparse_four) ,
  FDEF(log_spmat_four) ,
  {NULL, NULL, 0}
};

void R_init_sparsegl(DllInfo *dll){
  R_registerRoutines(dll, NULL, NULL, fMethods, NULL);
  R_useDynamicSymbols(dll, FALSE);
}

