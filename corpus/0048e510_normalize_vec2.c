
void normalize_vec2(float *param_1,float *param_2)

{
  float flen;
  float fx;
  float fy;
  
  fy = *param_2;
  fx = *param_1;
  flen = SQRT(fx * fx + fy * fy);
  *param_1 = fx / flen;
  *param_2 = fy / flen;
  return;
}

