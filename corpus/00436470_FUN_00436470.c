
void FUN_00436470(undefined4 param_1,int param_2,int param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  if (*(int *)(param_2 + 100) == -1) {
    FUN_004363e0(param_1,*(undefined4 *)(param_2 + 0x54),*(undefined2 *)(param_3 + 0x18),param_4);
    return;
  }
  pcVar2 = (char *)FUN_0048e800(DAT_005a6144,*(int *)(param_2 + 100));
  if (pcVar2 == (char *)0x0) {
    pcVar2 = s_UNKNOWN_SPECIAL_NAME_0053fab0;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar5 = pcVar2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar2 = pcVar5 + -uVar3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)param_4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    param_4 = param_4 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_4 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    param_4 = param_4 + 1;
  }
  return;
}

