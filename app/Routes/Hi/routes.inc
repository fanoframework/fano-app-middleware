(*!------------------------------------------------------------
 * Fano Web Framework Skeleton Application (https://fanoframework.github.io)
 *
 * @link      https://github.com/fanoframework/fano-app-middleware
 * @copyright Copyright (c) 2018 Zamrony P. Juhara
 * @license   https://github.com/fanoframework/fano-app-middleware/blob/master/LICENSE (GPL 3.0)
 *------------------------------------------------------------- *)
router.post(
    '/hi/{name}',
    container.get('hiController') as IRequestHandler
).add(container.get('ajaxOnlyMiddleware') as IMiddleware);
