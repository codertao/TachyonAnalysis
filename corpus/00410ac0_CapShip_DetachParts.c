
/* sweep */

void CapShip_DetachParts(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xe0);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xe0);
    if (*(short *)(iVar2 + 0x76) == 0xf) {
      *(undefined4 *)(iVar2 + 0x68) = 0;
    }
    Ent_ClearTargetedBy(iVar2);
    Ent_RemoveFromTargets(iVar2);
    iVar2 = iVar1;
  }
  return;
}

