
/* (int *cpuType, int *hasFpu, int *hasMmx) -> 0x603984/88/8c from WinMain */

void __cdecl call_Cpu_Detect(int *cpuType,int *hasFpu,int *hasMmx)

{
  int extraout_EAX;
  int extraout_ECX;
  int unaff_EBX;
  
  Cpu_Detect();
  *cpuType = extraout_EAX;
  *hasFpu = extraout_ECX;
  *hasMmx = unaff_EBX;
  return;
}

