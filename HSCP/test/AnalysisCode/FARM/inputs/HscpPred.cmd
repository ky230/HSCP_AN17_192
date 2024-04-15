Universe                = vanilla
Environment             = CONDORJOBID=$(Process)
notification            = Error
requirements            = (Memory > 200)
should_transfer_files   = YES
when_to_transfer_output = ON_EXIT

Executable              = FARM/inputs/0000_HscpPred.sh
output                  = FARM/logs/0000_HscpPred.out
error                   = FARM/logs/0000_HscpPred.err
log                     = FARM/logs/0000_HscpPred.log
Queue 1

Executable              = FARM/inputs/0001_HscpPred.sh
output                  = FARM/logs/0001_HscpPred.out
error                   = FARM/logs/0001_HscpPred.err
log                     = FARM/logs/0001_HscpPred.log
Queue 1
