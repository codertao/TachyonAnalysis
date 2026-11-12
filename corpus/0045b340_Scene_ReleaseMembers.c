
/* sweep */

void Scene_ReleaseMembers(uint *param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = 0;
  if (*param_1 != 0) {
    puVar4 = (undefined4 *)(param_1[1] + 0x38);
    do {
      iVar1 = puVar4[-2];
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x6c) = *puVar4;
        *(undefined4 *)(iVar1 + 0xa0) = 0;
        *(undefined4 *)(iVar1 + 0xa4) = 0;
        *(undefined4 *)(iVar1 + 0xa8) = 0;
        *(undefined4 *)(iVar1 + 0xac) = 0;
        *(undefined4 *)(iVar1 + 0xb0) = 0;
        *(undefined4 *)(iVar1 + 0xb4) = 0;
        *(undefined4 *)(iVar1 + 0x28) = puVar4[10];
        if ((((*(byte *)(puVar4 + -1) & 0x10) == 0) && (*(int *)(iVar1 + 0x8c) != 0)) &&
           (pcVar2 = *(code **)(*(int *)(iVar1 + 0x8c) + 0x7c), pcVar2 != (code *)0x0)) {
          (*pcVar2)(iVar1,5,0);
        }
        if ((*(int *)(iVar1 + 0x8c) != 0) &&
           (pcVar2 = *(code **)(*(int *)(iVar1 + 0x8c) + 0x7c), pcVar2 != (code *)0x0)) {
          (*pcVar2)(iVar1,6,0);
        }
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 0x19;
    } while (uVar3 < *param_1);
  }
  SpaceDust_SetEnabled(1);
  return;
}

