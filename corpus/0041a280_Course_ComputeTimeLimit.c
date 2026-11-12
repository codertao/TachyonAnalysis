
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Course_ComputeTimeLimit(void)

{
  float *pfVar1;
  int iVar2;
  undefined4 local_8;
  
  pfVar1 = (float *)(DAT_005b1f0c + 0xbc);
  iVar2 = Speed_HudToRaw(600);
  local_8 = (undefined4)
            (longlong)
            ROUND((float)(int)((GLBL_iter_cnt % 0xf) * 0x32 + 0x15f9 + _DAT_005b29c4 * 100) /
                  (*pfVar1 / (float)iVar2));
  DAT_005b29a8 = local_8;
  return;
}

