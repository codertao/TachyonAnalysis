
/* sweep */

void SbInventory_OnItemBtn(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = s_IAInv1_005502c8;
  for (iVar1 = DAT_00572024; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x88)) {
    *(undefined4 *)(iVar1 + 0x84) = 0;
  }
  for (; (param_1 = param_1 + -1, param_1 != 0 && (*pcVar2 != '\0')); pcVar2 = pcVar2 + 0x84) {
  }
  if ((*pcVar2 != '\0') && (*(int *)(pcVar2 + 0x80) != 0)) {
    *(undefined4 *)(*(int *)(pcVar2 + 0x80) + 0x84) = 1;
    SbInventory_ShowItem(*(int *)(pcVar2 + 0x80) + 0x30,*(int *)(pcVar2 + 0x80) + 0x50);
  }
  return;
}

