
/* sweep */

undefined4 * Scene_FindMember(uint *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = 0;
  puVar3 = (undefined4 *)param_1[1];
  if (*param_1 != 0) {
    do {
      iVar1 = __stricmp(*puVar3,param_2);
      if (iVar1 == 0) {
        return puVar3;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 0x19;
    } while (uVar2 < *param_1);
  }
  iVar1 = __stricmp(param_2,&DAT_00547904);
  return (undefined4 *)((iVar1 != 0) - 1);
}

