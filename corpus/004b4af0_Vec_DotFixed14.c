
/* sweep */

int Vec_DotFixed14(int *param_1,int *param_2)

{
  return (param_1[2] * param_2[2] >> 0xe) + (param_1[1] * param_2[1] >> 0xe) +
         (*param_1 * *param_2 >> 0xe);
}

