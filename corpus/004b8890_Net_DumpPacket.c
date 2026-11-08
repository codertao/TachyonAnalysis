
/* debug: write sub-msg list with MSG_* names to file */

void Net_DumpPacket(undefined4 param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  char *pcVar7;
  
  iVar6 = 0;
  iVar4 = c_fopen(param_1,&DAT_0053cab8);
  if (iVar4 != 0) {
    uVar2 = *param_2;
    while (uVar2 != 0xffff) {
      uVar2 = *param_2;
      if (uVar2 < 8) {
        uVar3 = param_2[1];
        puVar5 = (&PTR_s_MSG_NULL_0055f07c)[uVar2];
        pcVar7 = s__s___size__d_0055f17c;
      }
      else {
        uVar3 = param_2[1];
        puVar5 = (undefined *)(uint)uVar2;
        pcVar7 = s_APP_SPECIFIC_MSG__d___size__d_0055f15c;
      }
      c_fprintf(iVar4,pcVar7,puVar5,uVar3);
      puVar1 = param_2 + 1;
      param_2 = (ushort *)((int)param_2 + (uint)*puVar1);
      iVar6 = iVar6 + (uint)*puVar1;
      uVar2 = *param_2;
    }
    c_fprintf(iVar4,s_______MSG_END_________size__d_0055f13c,param_2[1]);
    c_fprintf(iVar4,s_Total_Bytes____d_0055f128,iVar6);
    c_fclose(iVar4);
  }
  return;
}

