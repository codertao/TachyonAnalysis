
/* sweep: Client DCBS / common / particle pools */

void CliPools_Init(void)

{
  undefined4 uVar1;
  
  DcbPool_Init(&DAT_005b3288,1000,0x124,s_Client_DCBS_005343b4,&DAT_005b327c);
  uVar1 = Cli_CommonPoolSize(s_Client_common_DCBS_005343a0,&DAT_005b327c);
  DcbPool_Init(&DAT_005b32b0,800,uVar1);
  DcbPool_Init(&DAT_005b32d8,0x514,0x94,s_Client_particle_DCBS_00534388,&DAT_005b327c);
  return;
}

