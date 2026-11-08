
undefined4 FUN_0048c030(int param_1)

{
  int *piVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar6 = param_1 * 0x170;
  if (((*(char **)(&DAT_0056abbc + iVar6) != (char *)0x0) &&
      (**(char **)(&DAT_0056abbc + iVar6) != '\0')) &&
     ((*(int *)(&DAT_0056abc8 + iVar6) != 0 || ((&DAT_0056abcc)[param_1 * 0x5c] != 0)))) {
    *(uint *)(&DAT_0056abd8 + iVar6) =
         (uint)(DAT_005a67a8 * *(int *)(&DAT_0056abd0 + iVar6)) / 0x280;
    *(uint *)(&DAT_0056abdc + iVar6) =
         (uint)(DAT_005a67ac * *(int *)(&DAT_0056abd0 + iVar6)) / 0x1e0;
    *(undefined4 *)(&DAT_0056abf8 + iVar6) = *(undefined4 *)(&DAT_0056abd4 + iVar6);
    piVar1 = (int *)(&DAT_0056abc4 + iVar6);
    *(undefined4 *)(&DAT_0056abfc + iVar6) = *(undefined4 *)(&DAT_0056abd4 + iVar6);
    if (*piVar1 != 0) {
      OurFreeMem(*piVar1);
      *piVar1 = 0;
    }
    if (*(int *)(&DAT_0056abc0 + iVar6) != 0) {
      OurFreeMem(*(int *)(&DAT_0056abc0 + iVar6));
      *(undefined4 *)(&DAT_0056abc0 + iVar6) = 0;
    }
    if (*(int *)(&DAT_0056aba4 + iVar6) != 0) {
      OurFreeMem(*(int *)(&DAT_0056aba4 + iVar6));
      *(undefined4 *)(&DAT_0056aba4 + iVar6) = 0;
    }
    uVar4 = 0xffffffff;
    pcVar7 = *(char **)(&DAT_0056abbc + iVar6);
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    FUN_0048e3d0(piVar1,~uVar4,4,s_TELETYPE_STRING_BUFFER_005598ac,
                 *(undefined4 *)(&DAT_0056aba0 + iVar6));
    if ((char *)*piVar1 != (char *)0x0) {
      uVar4 = 0xffffffff;
      pcVar7 = *(char **)(&DAT_0056abbc + iVar6);
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      pcVar7 = *(char **)(&DAT_0056abbc + iVar6);
      pcVar8 = (char *)*piVar1;
      for (uVar5 = ~uVar4 - 1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = ~uVar4 - 1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar7 = (char *)*piVar1;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      (&DAT_0056abb8)[param_1 * 0x5c] = ~uVar4 - 1;
      FUN_0048e3d0(&DAT_0056abc0 + iVar6,~uVar4,4,s_TELETYPE_SCRATCH_00559898,
                   *(undefined4 *)(&DAT_0056aba0 + iVar6));
      FUN_0048e3d0(&DAT_0056aba4 + iVar6,(&DAT_0056abb8)[param_1 * 0x5c] << 1,4,
                   s_TELETYPE_FONTLINE_BUFFER_0055987c,*(undefined4 *)(&DAT_0056aba0 + iVar6));
      if ((*(int *)(&DAT_0056abc0 + iVar6) != 0) && (*(int *)(&DAT_0056aba4 + iVar6) != 0)) {
        *(undefined2 *)(&DAT_0056aba8 + iVar6) = *(undefined2 *)(&DAT_0056ace0 + iVar6);
        *(undefined2 *)(&DAT_0056abac + iVar6) = *(undefined2 *)(&DAT_0056ac44 + iVar6);
        *(undefined2 *)(&DAT_0056abae + iVar6) = *(undefined2 *)(&DAT_0056ac48 + iVar6);
        if ((&DAT_0056abcc)[param_1 * 0x5c] == 0) {
          uVar3 = FUN_004e636c(*(undefined4 *)(&DAT_0056abc8 + iVar6));
        }
        else {
          uVar3 = FUN_004ae560(*(undefined4 *)(&DAT_0056abbc + iVar6),
                               (&DAT_0056abcc)[param_1 * 0x5c],
                               *(undefined4 *)(&DAT_0056abe8 + iVar6),&DAT_0056abd8 + iVar6);
        }
        *(ushort *)(&DAT_0056abb0 + iVar6) = uVar3;
        *(int *)(&DAT_0056ace8 + iVar6) = *(int *)(&DAT_0056ace4 + iVar6) / (int)(uint)uVar3 + 1;
        return 1;
      }
    }
  }
  return 0;
}

