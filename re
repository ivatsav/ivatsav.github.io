<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1" />
  <title>readme to not readme</title>
  <style>
    body {
      font-family: -apple-system, BlinkMacSystemFont, "Helvetica Neue", Helvetica, Arial, sans-serif;
      font-size: 18px;
      line-height: 1.6;
      background: white;
      color: black;
      max-width: 600px;
      margin: 2em auto;
      padding: 0 1rem;
      white-space: break-spaces;
      opacity: 0;
      transition: opacity 0.3s ease-in-out;
    }

    body.loaded {
      opacity: 1;
    }

    a {
      color: #0645AD; /* Standard web blue */
      text-decoration: none;
    }

    a:hover {
      text-decoration: underline;
    }

    .nav {
      text-align: center;
      margin-top: 1.5em;
      font-size: 16px;
    }

    .nav p {
      margin: 0.3em 0;
    }

    @media (prefers-color-scheme: dark) {
      body {
        background: #111;
        color: #eee;
      }

      a {
        color: #4ea1ff;
      }

      a:hover {
        text-decoration: underline;
      }
    }
  </style>
</head>
<body>
<p>
this is not for you

don't read this
don't agree with this
don't disagree with this

this is a madman
in the middle 
of the street
talking out aloud

a mad man
in search
of truth

if you still
go ahead
and read
the contents
of these pages

know this
these words
won't help you
in fact these words
might hurt you

so it is best
to ignore
just like
you'd ignore
the madman
on the streets
</p>

<div class="nav">
  <p><a href="../#re">home</a></p>
</div>

<script>
  window.addEventListener('DOMContentLoaded', () => {
    document.body.classList.add('loaded');
  });
</script>
</body>
</html>
