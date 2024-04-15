Universe                = vanilla
Environment             = CONDORJOBID=$(Process)
notification            = Error
requirements            = (Memory > 200)
should_transfer_files   = YES
when_to_transfer_output = ON_EXIT
