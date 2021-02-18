/******************************************************************************/

int c_functionals_2d(unsigned short* image, int dim0, int dim1          , double res0, double res1                             , double* area  , double* length , double* euler4   , double* euler8 );
int c_functionals_3d(unsigned short* image, int dim0, int dim1, int dim2, double res0, double res1, double res2, double* volume, double* surface, double* curvature, double* euler6, double* euler26);

/******************************************************************************/

int c_functions_open_2d(unsigned short* closing, int dim0, int dim1          , double res0, double res1             , double* dist                , double* area   , double* length   , double* euler4, double* euler8 );
int c_functions_open_3d(unsigned short* closing, int dim0, int dim1, int dim2, double res0, double res1, double res2, double* dist, double* volume, double* surface, double* curvature, double* euler6, double* euler26);

/******************************************************************************/

int c_functions_close_2d(unsigned short* closing, int dim0, int dim1          , double res0, double res1             , double* dist                , double* area   , double* length   , double* euler4, double* euler8 );
int c_functions_close_3d(unsigned short* closing, int dim0, int dim1, int dim2, double res0, double res1, double res2, double* dist, double* volume, double* surface, double* curvature, double* euler6, double* euler26);

/******************************************************************************/

long int* quant2D(unsigned short* image, int dim0, int dim1          );
long int* quant3D(unsigned short* image, int dim0, int dim1, int dim2);

double areaDens2D(long int *h);
double lengDens2D(long int *h, double res0, double res1);
double eul4Dens2D(long int *h, double res0, double res1);
double eul8Dens2D(long int *h, double res0, double res1);

double voluDens3D(long int *h);
double surfDens3D(long int *h, double res0, double res1, double res2);
double curvDens3D(long int *h, double res0, double res1, double res2);
double eul6Dens3D(long int *h, double res0, double res1, double res2);
double eu26Dens3D(long int *h, double res0, double res1, double res2);

/******************************************************************************/

void weights(double *Delta,double *weight);

/******************************************************************************/

