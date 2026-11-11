
void FUN_004b3a10(int *param_1)

{
  DAT_0055ecac = *param_1;
  DAT_0055ecb0 = param_1[1];
  DAT_0055ecb4 = param_1[2];
  call_Vec_NormalizeFast((vec3 *)&DAT_0055ecac);
  DAT_0055ecac = DAT_0055ecac >> 1;
  DAT_0055ecb0 = DAT_0055ecb0 >> 1;
  DAT_0055ecb4 = DAT_0055ecb4 >> 1;
  return;
}

