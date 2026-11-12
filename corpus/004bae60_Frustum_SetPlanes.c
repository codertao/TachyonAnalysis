
/* refine: copy N planes (float4) to 0x6b0960 */

void Frustum_SetPlanes(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (0 < param_2) {
    puVar2 = &DAT_006b0960;
    iVar3 = param_2;
    do {
      puVar1 = (undefined4 *)(param_1 + -0x6b0960 + (int)puVar2);
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      iVar3 = iVar3 + -1;
      puVar2[3] = puVar1[3];
      puVar2 = puVar2 + 4;
    } while (iVar3 != 0);
    DAT_006b0950 = param_2;
    return;
  }
  DAT_006b0950 = param_2;
  return;
}

