
/* CRT: fills _cfltcvt_tab (_cfltcvt/_cropzeros/_fassign/_forcdecpt/_positive) */

void __cfltcvt_init(void)

{
  PTR___fptrap_005615fc = &LAB_004bf5fd;
  PTR___fptrap_005615f8 = __cfltcvt;
  PTR___fptrap_00561600 = __fassign;
  PTR___fptrap_00561604 = __forcdecpt;
  PTR___fptrap_00561608 = &LAB_004bf64b;
  PTR___fptrap_0056160c = __cfltcvt;
  return;
}

