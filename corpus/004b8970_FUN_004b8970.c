
void FUN_004b8970(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_004a6e20(&LAB_004b8940);
  FUN_004a6e30(&LAB_004b8950);
  puVar2 = &DAT_006af580;
  for (iVar1 = 0x36; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_006af644 = param_2;
  puVar2 = param_1;
  puVar3 = &DAT_006af580;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  DAT_006af588 = DAT_006af588 + 0x28;
  DAT_006af5d0 = FUN_0049c500(*param_1,4,0,s_Client_send_buffer_0055f1bc,param_2);
  DAT_006af5dc = (undefined4 *)
                 FUN_0049c500(0x200,4,0,s_mpClient_event_tag_buffer_0055f1a0,DAT_006af644);
  puVar2 = DAT_006af5dc;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_006af5e0 = 0;
  FUN_004b7840(&DAT_006af5e4,param_1[1],DAT_006af588,s_Client_Msg_buffer_0055f18c);
  DAT_006af620 = 0xffffffff;
  DAT_006af640 = 100;
  FUN_004b9070(2);
  DAT_006af64c = 0;
  DAT_006af5c8 = 1;
  DAT_006af648 = 1;
  return;
}

