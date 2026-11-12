
/* sweep */

void CliBase_AttachSubpart(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x8c);
  if (iVar2 != 0) {
    iVar1 = PartChain_FindById_d4(param_1,param_2);
    if (iVar1 == 0) {
      iVar2 = BasePart_SpawnReplica
                        (*(int *)(*(int *)(iVar2 + 0x94) + 4) + param_2 * 0x80,param_3,iVar2,
                         *(int *)(iVar2 + 0x94),param_1,*(undefined1 *)(param_1 + 0xc2));
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
        *(int *)(param_1 + 0xe0) = iVar2;
        Explosion_SpawnByType(6,0,iVar2 + 0x34,0,0);
      }
    }
  }
  return;
}

