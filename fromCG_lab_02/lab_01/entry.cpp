#include "entry.h"
#include "filehelper.h"
#include "framedrawer.h"
#include "movement.h"
#include "turn.h"
#include "scale.h"

int enter(Args args)
{
    static Frame frame = init();
    Errors error = OK;
    switch (args.action)
    {
        case LOAD_FILE:
            error = readFromFile(frame, args.lf);
            break;
        case MOVE:
            error = transferPoints(frame, args.move);
            break;
        case SCALE:
            error = scale(frame, args.scale);
            break;
        case DRAW:
            error = drawFrame(frame, args.draw);
            break;
        case TURNX:
            error = turn(frame, args);
            break;
        case TURNY:
            error = turn(frame, args);
            break;
        case TURNZ:
            error = turn(frame, args);
            break;
        case QUIT:
            clear(frame);
            break;
        default:
            error = UNKNOWN_ERROR;
    }
    return error;
}
