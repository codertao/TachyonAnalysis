
void FUN_0048bbb0(int param_1)

{
  int iVar1;
  char *pcVar2;
  size_t _Count;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int *layout;
  
  iVar5 = param_1 * 0x170;
  if ((((*(int *)(&DAT_0056abc8 + iVar5) != 0) || ((&DAT_0056abcc)[param_1 * 0x5c] != 0)) &&
      (pcVar3 = *(char **)(&DAT_0056abc4 + iVar5), pcVar3 != (char *)0x0)) &&
     (*(int *)(&DAT_0056abc0 + iVar5) != 0)) {
    _Count = (&DAT_0056abb8)[param_1 * 0x5c];
    pcVar2 = pcVar3 + (&DAT_0056acdc)[param_1 * 0x5c] + 1;
    iVar4 = 0;
    for (iVar1 = _Count - (&DAT_0056acdc)[param_1 * 0x5c]; iVar1 != 0; iVar1 = iVar1 + -1) {
      if (*pcVar2 == ' ') {
        pcVar2 = pcVar2 + 1;
        break;
      }
      iVar4 = iVar4 + 1;
      pcVar2 = pcVar2 + 1;
    }
    if ((&DAT_0056ad04)[param_1 * 0x5c] == 0) {
      _Count = (int)pcVar2 - (int)pcVar3;
    }
    _strncpy(*(char **)(&DAT_0056abc0 + iVar5),pcVar3,_Count);
    if ((&DAT_0056abcc)[param_1 * 0x5c] == 0) {
      call_Font_LayoutText
                (*(char **)(&DAT_0056abc0 + iVar5),*(void **)(&DAT_0056abc8 + iVar5),
                 &DAT_0056aba4 + iVar5);
    }
    else {
      *(uint *)(&DAT_0056abf4 + iVar5) = (uint)*(uint3 *)(&DAT_0056ac03 + iVar5);
      Text_WordWrap(*(undefined4 *)(&DAT_0056abc0 + iVar5),(&DAT_0056abcc)[param_1 * 0x5c],
                    &DAT_0056aba4 + iVar5,*(undefined4 *)(&DAT_0056abe8 + iVar5),
                    &DAT_0056abd8 + iVar5);
    }
    layout = (int *)(&DAT_0056aba4 + iVar5);
    if (*(uint *)(&DAT_0056acec + iVar5) != (uint)*(ushort *)(&DAT_0056abaa + iVar5)) {
      *(uint *)(&DAT_0056acec + iVar5) = (uint)*(ushort *)(&DAT_0056abaa + iVar5);
      (&DAT_0056acfc)[param_1 * 0x5c] = 1;
    }
    (&DAT_0056acfc)[param_1 * 0x5c] = 0;
    iVar1 = FUN_0049c780(*layout);
    iVar1 = iVar1 + -1;
    for (pcVar3 = (char *)(*layout + iVar1); (iVar1 != 0 && (*pcVar3 == '\0')); pcVar3 = pcVar3 + -1
        ) {
      iVar1 = iVar1 + -1;
    }
    while (iVar4 != 0) {
      if (*pcVar3 != '\0') {
        *pcVar3 = '\0';
        iVar4 = iVar4 + -1;
      }
      pcVar3 = pcVar3 + -1;
    }
    if ((&DAT_0056abcc)[param_1 * 0x5c] != 0) {
      FUN_004aec10((&DAT_0056abcc)[param_1 * 0x5c],layout,*(undefined4 *)(&DAT_0056acf8 + iVar5),
                   *(undefined4 *)(&DAT_0056ace8 + iVar5),(uint)*(uint3 *)(&DAT_0056ac00 + iVar5),
                   *(undefined4 *)(&DAT_0056abe8 + iVar5),&DAT_0056abd8 + iVar5);
      return;
    }
    Font_SetColorRamp((uint)(byte)(&DAT_0056ac02)[iVar5],(uint)(byte)(&DAT_0056ac01)[iVar5],
                      (uint)(byte)(&DAT_0056ac00)[iVar5],(uint)(byte)(&DAT_0056ac05)[iVar5],
                      (uint)(byte)(&DAT_0056ac04)[iVar5],(uint)(byte)(&DAT_0056ac03)[iVar5]);
    call_Font_DrawLayout
              (layout,*(void **)(&DAT_0056abc8 + iVar5),DAT_005a6320 & 0xff,0,
               *(int *)(&DAT_0056acf8 + iVar5),*(int *)(&DAT_0056ace8 + iVar5));
  }
  return;
}

