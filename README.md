# Instructions

This shows a minor mod to `kythe` to make it includable as an external.
To see it working, execute:

    ./run_with_env.sh

This will export `TEST_LIB` for `cc_system_package`, and will look for `eigen3`
using `pkg_config_package`.

To see what happens on master, simply do:

    ( cd kythe && git checkout master )
    ./run_with_env.sh

This should fail.
