
/* sweep */

void CapShipReplica_SpawnParts(int param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x154) + 4);
  uVar2 = 0;
  puVar3 = param_2 + 1;
  if (*param_2 != 0) {
    do {
      Dcb_SpawnProjectile(param_1,(uint)(ushort)*puVar3 * 0x80 + iVar1,
                          *(int *)(param_1 + 0xe8) + (uint)(ushort)*puVar3 * 2,param_3);
      uVar2 = uVar2 + 1;
      puVar3 = (uint *)((int)puVar3 + 2);
    } while (uVar2 < *param_2);
  }
  return;
}

