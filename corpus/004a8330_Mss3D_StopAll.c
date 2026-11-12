
/* sweep */

int Mss3D_StopAll(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int local_4;
  
  uVar3 = 0;
  local_4 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar2 = *(undefined4 **)(param_1 + 8);
    if ((puVar2 != (undefined4 *)0x0) && (*(int *)(param_1 + 4) != 0)) {
      do {
        iVar1 = _AIL_3D_sample_status_4(*puVar2);
        if (iVar1 == 4) {
          _AIL_end_3D_sample_4(*puVar2);
          local_4 = local_4 + 1;
        }
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 0xe;
      } while (uVar3 < *(uint *)(param_1 + 4));
    }
    return local_4;
  }
  return 0;
}

