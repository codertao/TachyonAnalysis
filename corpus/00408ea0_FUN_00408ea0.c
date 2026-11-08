
void FUN_00408ea0(uint *param_1,vec3 *param_2)

{
  vec3 *fvec;
  uint uVar1;
  undefined1 local_18 [24];
  
  FUN_004b1bb0(local_18,param_2);
  uVar1 = 0;
  if (*param_1 != 0) {
    fvec = (vec3 *)(param_1[1] + 100);
    do {
      some_rotate_by_global(fvec,fvec + 1);
      uVar1 = uVar1 + 1;
      fvec = (vec3 *)&fvec[10].z;
    } while (uVar1 < *param_1);
  }
  return;
}

