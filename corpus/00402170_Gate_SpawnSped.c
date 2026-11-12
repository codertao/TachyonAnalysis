
/* spawn a SPED on gate transit */

void Gate_SpawnSped(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar1 = Spx_IsLoaded(*(int *)(param_2 + 0xf0) + 0x38);
    if (iVar1 != 0) {
      iVar2 = Spx_FindGroupInSector(iVar1,param_1);
      if (iVar2 != 0) {
        iVar3 = Gate_FindByName(*(int *)(*(int *)(param_2 + 100) + 0x3c) + 0xc,iVar1,
                                *(undefined4 *)(*(int *)(param_2 + 0xf0) + 100));
        if (iVar3 != 0) {
          if (DAT_005a6730 != 0) {
            Sped_LogSpawn(*(undefined4 *)(iVar2 + 0x20),param_1);
          }
          SpawnQueue_Add(*(undefined4 *)(iVar2 + 0x20),
                         *(undefined4 *)(*(int *)(iVar3 + 0xf0) + 0x20),0xfa,iVar1);
          Ent_SetPosRaw(iVar1,1);
        }
      }
    }
  }
  return;
}

