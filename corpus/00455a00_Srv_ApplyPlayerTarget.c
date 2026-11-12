
/* sweep: guess */

undefined4 Srv_ApplyPlayerTarget(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(short *)(param_2 + 0x20) == 0) {
    uVar1 = Quad_FindEntById(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_1 + 100));
    return uVar1;
  }
  iVar2 = Quad_FindEntById(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_1 + 100));
  if (iVar2 != 0) {
    uVar1 = PartChain_FindById_dc(iVar2,*(undefined2 *)(param_2 + 0x22));
    return uVar1;
  }
  return 0;
}

