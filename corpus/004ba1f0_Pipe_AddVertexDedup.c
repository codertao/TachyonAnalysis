
/* refine: append screen vertex unless identical to one of the last 8 */

void Pipe_AddVertexDedup(float *param_1,undefined2 *param_2)

{
  int iVar1;
  float *pfVar2;
  
  pfVar2 = *(float **)(DAT_006b0f4c + 0x1c);
  iVar1 = 0;
  if (8 < DAT_006c8f68) {
    iVar1 = DAT_006c8f68 + -8;
    pfVar2 = pfVar2 + iVar1 * 10;
  }
  while( true ) {
    if (DAT_006b0f44 <= pfVar2) {
      pfVar2 = DAT_006b0f44;
      for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pfVar2 = *param_1;
        param_1 = param_1 + 1;
        pfVar2 = pfVar2 + 1;
      }
      *param_2 = (undefined2)DAT_006c8f68;
      DAT_006c8f68 = DAT_006c8f68 + 1;
      DAT_006b0f44 = DAT_006b0f44 + 10;
      return;
    }
    if ((((*pfVar2 == *param_1) && (pfVar2[1] == param_1[1])) && (pfVar2[6] == param_1[6])) &&
       (((pfVar2[7] == param_1[7] && (pfVar2[4] == param_1[4])) && (pfVar2[2] == param_1[2]))))
    break;
    pfVar2 = pfVar2 + 10;
    iVar1 = iVar1 + 1;
  }
  *param_2 = (short)iVar1;
  return;
}

