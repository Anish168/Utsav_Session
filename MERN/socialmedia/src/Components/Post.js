// function Post() {
//   return (
//     <div class="card" style={{ width: "18rem;" }}>
//       <div class="card-body">
//         <h5 class="card-title">Card title</h5>
//         <p class="card-text">
//           Some quick example text to build on the card title and make up the
//           bulk of the card's content.
//         </p>
//         <a href="#" class="btn btn-primary">
//           Go somewhere
//         </a>
//       </div>
//     </div>
//   );
// }
// export default Post;

// import { MdDeleteSweep } from "react-icons/md";
// function Post({ post }) {
//   return (
//     <div class="card post-card" style={{ width: "30rem" }}>
//       <div class="card-body">
//         <h5 class="card-title">
//           {post.title}
//           <span class="position-absolute top-0 start-100 translate-middle badge rounded-pill bg-danger">
//             {/* {post.reactions} */}
//             <MdDeleteSweep />
//           </span>
//         </h5>
//         <p class="card-text">{post.body}</p>
//         {post.tags.map((tag) => (
//           <span class="badge text-bg-primary hashtag">{tag}</span>
//         ))}
//         <div class="alert alert-success reactions" role="alert">
//           This post is reacted by {post.reactions} people.
//         </div>
//       </div>
//     </div>
//   );
// }
// export default Post;
import { useContext } from "react";
import { MdDeleteSweep } from "react-icons/md";
import { PostList } from "../store/post-list-store";

function Post({ post }) {
  const { delPost } = useContext(PostList);

  return (
    <div class="card post-card" style={{ width: "30rem" }}>
      <div class="card-body">
        <h5 class="card-title">
          {post.title}
          <span
            class="position-absolute top-0 start-100 translate-middle badge rounded-pill bg-danger"
            onClick={() => delPost(post.id)}
          >
            {/* {post.reactions} */}
            <MdDeleteSweep />
          </span>
        </h5>
        <p class="card-text">{post.body}</p>
        {post.tags.map((tag) => (
          <span class="badge text-bg-primary hashtag">{tag}</span>
        ))}
        <div class="alert alert-success reactions" role="alert">
          This post is reacted by {post.reactions} people.
        </div>
      </div>
    </div>
  );
}
export default Post;
