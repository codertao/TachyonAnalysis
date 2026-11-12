
/* sweep */

undefined4 Quad_UnlinkProjectile(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0xc);
  if (*(int *)(param_2 + 0xc) == param_1) {
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x9c);
    return 1;
  }
  do {
    iVar1 = iVar2;
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = *(int *)(iVar1 + 0x9c);
  } while (*(int *)(iVar1 + 0x9c) != param_1);
  *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  return 1;
}

