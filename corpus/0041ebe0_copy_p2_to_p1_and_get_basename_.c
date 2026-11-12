
void copy_p2_to_p1_and_get_basename_(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint p2Len;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *str2;
  
  p2Len = 0xffffffff;
  do {
    pcVar2 = param_2;
    if (p2Len == 0) break;
    p2Len = p2Len - 1;
    pcVar2 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar2;
  } while (cVar1 != '\0');
  p2Len = ~p2Len;
  str2 = pcVar2 + -p2Len;
  pcVar2 = param_1;
  for (uVar3 = p2Len >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)str2;
    str2 = str2 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (p2Len = p2Len & 3; p2Len != 0; p2Len = p2Len - 1) {
    *pcVar2 = *str2;
    str2 = str2 + 1;
    pcVar2 = pcVar2 + 1;
  }
  __strupr(param_1);
  pcVar2 = _strstr(param_1,&DAT_00535738);
  if (pcVar2 == (char *)0x0) {
    p2Len = 0xffffffff;
    pcVar2 = &DAT_00535738;
    do {
      pcVar5 = pcVar2;
      if (p2Len == 0) break;
      p2Len = p2Len - 1;
      pcVar5 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar5;
    } while (cVar1 != '\0');
    p2Len = ~p2Len;
    iVar4 = -1;
    do {
      pcVar2 = param_1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar2 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar2;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -p2Len;
    pcVar2 = pcVar2 + -1;
    for (uVar3 = p2Len >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (p2Len = p2Len & 3; p2Len != 0; p2Len = p2Len - 1) {
      *pcVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar2 = pcVar2 + 1;
    }
  }
  return;
}

