
undefined4 FUN_0048c270(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_8;
  int local_4;
  
  iVar2 = FUN_0048c030(param_1);
  if (iVar2 != 0) {
    iVar2 = param_1 * 0x170;
    if ((&DAT_0056abcc)[param_1 * 0x5c] == 0) {
      if (*(int *)(&DAT_0056abc8 + iVar2) == 0) {
        return 0;
      }
      FUN_004e6f58(*(undefined4 *)(&DAT_0056abc4 + iVar2),*(int *)(&DAT_0056abc8 + iVar2),
                   &DAT_0056aba4 + iVar2);
    }
    else {
      *(uint *)(&DAT_0056abf4 + iVar2) = (uint)*(uint3 *)(&DAT_0056ac03 + iVar2);
      Text_WordWrap(*(undefined4 *)(&DAT_0056abc4 + iVar2),(&DAT_0056abcc)[param_1 * 0x5c],
                    &DAT_0056aba4 + iVar2,*(undefined4 *)(&DAT_0056abe8 + iVar2),
                    &DAT_0056abd8 + iVar2);
    }
    piVar1 = (int *)(&DAT_0056ac30 + iVar2);
    *(undefined4 *)(&DAT_0056ac2c + iVar2) = (&DAT_0056abb8)[param_1 * 0x5c];
    if (*piVar1 != 0) {
      OurFreeMem(*piVar1);
    }
    FUN_0048e3d0(piVar1,(&DAT_0056abb8)[param_1 * 0x5c] * 0x30,4,s_TELETYPE_CHAR_005598c4,
                 *(undefined4 *)(&DAT_0056aba0 + iVar2));
    iVar7 = *piVar1;
    if (iVar7 != 0) {
      local_8 = *(int *)(&DAT_0056ac48 + iVar2);
      pcVar4 = *(char **)(&DAT_0056aba4 + iVar2);
      iVar5 = *(int *)(&DAT_0056ac44 + iVar2);
      iVar6 = *(int *)(&DAT_0056ac2c + iVar2);
      local_4 = iVar6;
      while (iVar6 != 0) {
        if (*pcVar4 == '\0') {
          iVar5 = *(int *)(&DAT_0056ac44 + iVar2);
          local_8 = local_8 + (uint)*(ushort *)(&DAT_0056abb0 + iVar2);
        }
        else {
          str_sprintf(iVar7,&DAT_0053ebdc,(int)*pcVar4);
          *(int *)(iVar7 + 0x24) = local_8;
          *(int *)(iVar7 + 0x20) = iVar5;
          *(undefined2 *)(iVar7 + 2) = *(undefined2 *)(&DAT_0056ac00 + iVar2);
          *(undefined *)(iVar7 + 4) = (&DAT_0056ac02)[iVar2];
          *(undefined2 *)(iVar7 + 5) = *(undefined2 *)(&DAT_0056ac03 + iVar2);
          *(undefined *)(iVar7 + 7) = (&DAT_0056ac05)[iVar2];
          if ((&DAT_0056abcc)[param_1 * 0x5c] == 0) {
            uVar3 = FUN_004e668a(iVar7,*(undefined4 *)(&DAT_0056abc8 + iVar2));
            *(undefined4 *)(iVar7 + 0x28) = uVar3;
            uVar3 = FUN_004e636c(*(undefined4 *)(&DAT_0056abc8 + iVar2));
            *(undefined4 *)(iVar7 + 0x2c) = uVar3;
          }
          else {
            uVar3 = Text_MeasureWidth(iVar7,(&DAT_0056abcc)[param_1 * 0x5c],
                                      *(undefined4 *)(&DAT_0056abe8 + iVar2),&DAT_0056abd8 + iVar2);
            *(undefined4 *)(iVar7 + 0x28) = uVar3;
            uVar3 = Text_GlyphHeight(iVar7,(&DAT_0056abcc)[param_1 * 0x5c],
                                     *(undefined4 *)(&DAT_0056abe8 + iVar2),&DAT_0056abd8 + iVar2);
            *(undefined4 *)(iVar7 + 0x2c) = uVar3;
            iVar6 = local_4;
          }
          iVar5 = iVar5 + *(int *)(iVar7 + 0x28);
          iVar6 = iVar6 + -1;
          iVar7 = iVar7 + 0x30;
          local_4 = iVar6;
        }
        pcVar4 = pcVar4 + 1;
      }
      return 1;
    }
  }
  return 0;
}

