
/* load CBIN mapping SPEDNAMES alias -> DES_NAMES (.des model); arrays at DAT_005a5dfc/e00/e04 */

void Sped_LoadNameRegistry(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar2 = Cbin_Open(param_1);
  if (iVar2 != 0) {
    DAT_005a5df8 = Cbin_CountEntries(&DAT_00532af4,&PTR_DAT_0053f91c);
    uVar3 = FUN_0049c0f0(&DAT_00532af4,&PTR_DAT_0053f91c,0x40,1);
    uVar4 = FUN_0049c0f0(&DAT_00532af4,&PTR_DAT_0053f91c,0x40,2);
    FUN_0048e3a0(&DAT_005a5dfc,uVar3,4,s_DES_NAMES_0053f910,param_2);
    FUN_0048e3a0(&DAT_005a5e00,uVar4,4,s_DES_NAMES_0053f910,param_2);
    FUN_0048e3a0(&DAT_005a5e04,DAT_005a5df8 * 8,4,s_SPEDNAMES_0053f904,param_2);
    Cbin_SelectGroup(&DAT_00532af4);
    iVar2 = 0;
    puVar6 = DAT_005a5e04;
    pcVar7 = DAT_005a5dfc;
    if (0 < DAT_005a5df8) {
      do {
        *puVar6 = pcVar7;
        FUN_0049bdb0(&PTR_DAT_0053f91c,pcVar7,0x40,0,4,1);
        uVar5 = 0xffffffff;
        pcVar8 = pcVar7;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        iVar2 = iVar2 + 1;
        puVar6 = puVar6 + 2;
        pcVar7 = pcVar7 + ~uVar5;
      } while (iVar2 < DAT_005a5df8);
    }
    Cbin_SelectGroup(&DAT_00532af4);
    iVar2 = 0;
    if (0 < DAT_005a5df8) {
      puVar6 = DAT_005a5e04 + 1;
      pcVar7 = DAT_005a5e00;
      do {
        *puVar6 = pcVar7;
        FUN_0049bdb0(&PTR_DAT_0053f91c,pcVar7,0x40,0,4,2);
        uVar5 = 0xffffffff;
        pcVar8 = pcVar7;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        iVar2 = iVar2 + 1;
        puVar6 = puVar6 + 2;
        pcVar7 = pcVar7 + ~uVar5;
      } while (iVar2 < DAT_005a5df8);
    }
    Cbin_Close();
  }
  return;
}

